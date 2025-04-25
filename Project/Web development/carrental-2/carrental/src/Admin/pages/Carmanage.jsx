// import React, { useEffect, useState } from 'react'
// import AHeader from '../common/AHeader'
// import { MDBBadge, MDBBtn, MDBTable, MDBTableHead, MDBTableBody } from 'mdb-react-ui-kit';
// import axios from 'axios';


// function Carmanage() {
//     const [carlisting, setcarlisting] = useState([])

//     const getcar = async () => {
//         const res = await axios.get("http://localhost:3000/carlisting")
//         console.log(res.data)
//         setcarlisting(res.data)
//     }
//     useEffect(()=>{
//         getcar()
//     },[])

//     return (

//         <div>
//             <AHeader />
//             <div className="container">
//                 <h1 className='text-center py-4'>Hello Car Listing management</h1>
//                 <MDBTable align='middle'>
//                     <MDBTableHead>
// <tr>
//     <th scope='col'>ID</th>
//     <th scope='col'>Image</th>
//     <th scope='col'>Name</th>
//     <th scope='col'>MFG</th>
//     <th scope='col'>type</th>
//     <th scope='col'>Km</th>
//     <th scope='col'>Price</th>
//     <th scope='col' className='text-center'>Actions</th>
// </tr>
//                     </MDBTableHead>
//                     <MDBTableBody>
//                         {
//                             carlisting && carlisting.map((car, index) => {
//                                 console.log(car)
//                                 const {id,title,carimg,MFG,type,Km,price} = car
//                                 return (
//                                     <tr>
//                                         <td>{id}</td>
//                                         <td>
//                                             <div className='d-flex align-items-center'>
//                                                 <img
//                                                     src={carimg}
//                                                     alt=''
//                                                     style={{ width: '45px', height: '45px' }}
//                                                     className='rounded-circle'
//                                                 />

//                                             </div>
//                                         </td>
//                                         <td>
//                                             <div className='d-flex align-items-center'>

//                                                 <div className='ms-3'>
//                                                     <p className='fw-bold mb-1'>{title}</p>

//                                                 </div>
//                                             </div>
//                                         </td>
//                                         <td>
//                                             <p className='fw-normal mb-1'>{MFG}</p>
//                                         </td>
//                                         <td>
//                                             {/* <MDBBadge color='success' pill>
//                                                 Active
//                                             </MDBBadge> */}
//                                              <p className='fw-normal mb-1'>{type}</p>
//                                         </td>
//                                         <td>{Km}</td>
//                                         <td>{price}</td>
//                                         <td className='text-center'>
// <MDBBtn color='primary' className='' rounded size='sm'>
//     View
// </MDBBtn>
// <MDBBtn color='success' className='mx-1' rounded size='sm'>
//     Edit
// </MDBBtn>
// <MDBBtn color='danger' rounded size='sm'>
//     Delete
// </MDBBtn>
//                                         </td>
//                                     </tr>
//                                 )
//                             })
//                         }


//                     </MDBTableBody>
//                 </MDBTable>
//             </div>

//         </div>
//     )
// }

// export default Carmanage
import React, { useEffect, useState } from 'react';
import {
    MDBBtn,
    MDBModal,
    MDBModalDialog,
    MDBModalContent,
    MDBModalHeader,
    MDBModalTitle,
    MDBModalBody,
    MDBModalFooter,
} from 'mdb-react-ui-kit';

import AHeader from '../common/AHeader';
import axios from 'axios';
import { NavLink } from 'react-router-dom';

function Carmanage() {
    const [carlisting, setCarlisting] = useState([]);
    const [filteredCars, setFilteredCars] = useState([]);
    const [search, setSearch] = useState('');



    const [scrollableModal, setScrollableModal] = useState(false);

    // Fetch car listing from API
    const getCars = async () => {
        const res = await axios.get("http://localhost:3000/carlisting");
        setCarlisting(res.data);
        setFilteredCars(res.data);
    };
    // delete function
    const deletedata = async (id) => {
        const res = await axios.delete(`http://localhost:3000/carlisting/${id}`)
        console.log(res.data)
        getCars()
    }
    useEffect(() => {
        getCars();
    }, []);

    // Filter cars by search input
    const handleSearch = (e) => {
        const value = e.target.value.toLowerCase();
        setSearch(value);
        const filtered = carlisting.filter((car) =>
            car.title.toLowerCase().includes(value)
        );
        setFilteredCars(filtered);
    };

    return (
        <div>
            <AHeader />
            <div className="container">
                <h1 className="text-center py-4">Car Listing Management</h1>

                {/* Search Bar */}
                <input
                    type="text"
                    placeholder="Search by car name..."
                    value={search}
                    onChange={handleSearch}
                    className="form-control mb-4"
                />

                {/* Car Listing Table */}
                <table className="table table-striped">
                    <thead>
                        <tr>
                            <th>ID</th>
                            <th>Image</th>
                            <th>Name</th>
                            <th>MFG</th>
                            <th>Type</th>
                            <th>Km</th>
                            <th>Price</th>
                            <th>Actions</th>
                        </tr>
                    </thead>
                    <tbody>
                        {filteredCars.length > 0 ? (
                            filteredCars.map((car) => (
                                <tr key={car.id}>
                                    <td>{car.id}</td>
                                    <td>
                                        <img
                                            src={car.carimg}
                                            alt={car.title}
                                            style={{ width: '45px', height: '45px', borderRadius: '50%' }}
                                        />
                                    </td>
                                    <td>{car.title}</td>
                                    <td>{car.MFG}</td>
                                    <td>{car.type}</td>
                                    <td>{car.Km}</td>
                                    <td>{car.price}</td>
                                    <td>
                                      <button className="btn btn-primary btn-sm" >View</button>
                                        <NavLink to={`/update/:${car.id}`} className="btn btn-success btn-sm mx-2">Edit</NavLink>
                                        <button className="btn btn-danger btn-sm" onClick={() => deletedata(car.id)}>Delete</button>
                                    </td>
                                </tr>
                            ))
                        ) : (
                            <tr>
                                <td colSpan="8" className="text-center">
                                    No cars found.
                                </td>
                            </tr>
                        )}
                    </tbody>
                </table>
            </div>

{/* 
            <MDBBtn onClick={() => setScrollableModal(!scrollableModal)}>LAUNCH DEMO MODAL</MDBBtn> */}

        </div>

    );
}

export default Carmanage;
