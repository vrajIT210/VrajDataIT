import React from 'react'
import { NavLink } from 'react-router-dom'
function AHeader() {
    return (
        <div>
            <div className="container-fluid bg-dark py-3 px-lg-5 d-none d-lg-block">
                <div className="row">
                    <div className="col-md-6 text-center text-lg-left mb-2 mb-lg-0">
                        <div className="d-inline-flex align-items-center">
                            <a className="text-body pr-3" href><i className="fa fa-phone-alt mr-2" />+012 345 6789</a>
                            <span className="text-body">|</span>
                            <a className="text-body px-3" href><i className="fa fa-envelope mr-2" />info@example.com</a>
                        </div>
                    </div>
                    <div className="col-md-6 text-center text-lg-right">
                        <div className="d-inline-flex align-items-center">
                            <a className="text-body px-3" href>
                                <i className="fab fa-facebook-f" />
                            </a>
                            <a className="text-body px-3" href>
                                <i className="fab fa-twitter" />
                            </a>
                            <a className="text-body px-3" href>
                                <i className="fab fa-linkedin-in" />
                            </a>
                            <a className="text-body px-3" href>
                                <i className="fab fa-instagram" />
                            </a>
                            <a className="text-body pl-3" href>
                                <i className="fab fa-youtube" />
                            </a>
                        </div>
                    </div>
                </div>
            </div>
            {/* Topbar End */}
            {/* Navbar Start */}
            <div className="container-fluid position-relative nav-bar p-0">
                <div className="position-relative px-lg-5" style={{ zIndex: 9 }}>
                    <nav className="navbar navbar-expand-lg bg-secondary navbar-dark py-3 py-lg-0 pl-3 pl-lg-5">
                        <a href className="navbar-brand">
                            <h1 className="text-uppercase text-primary mb-1">Dashboard</h1>
                        </a>
                        <button type="button" className="navbar-toggler" data-toggle="collapse" data-target="#navbarCollapse">
                            <span className="navbar-toggler-icon" />
                        </button>
                        <div className="collapse navbar-collapse justify-content-between px-3" id="navbarCollapse">
                            <div className="navbar-nav ml-auto py-0">
                                <NavLink to="/" className="nav-item nav-link">Home</NavLink>
                                <NavLink to="/about" className="nav-item nav-link">About</NavLink>
                                <div className="nav-item dropdown">
                                    <a href="#" className="nav-link dropdown-toggle" data-toggle="dropdown">serviceManage</a>
                                    <div className="dropdown-menu rounded-0 m-0">
                                        <NavLink to="/aservice" className="dropdown-item">service Listing Manage</NavLink>
                                        <NavLink to="/serviceadd" className="dropdown-item">service ADD</NavLink>

                                    </div>
                                </div>






                                <div className="nav-item dropdown">
                                    <a href="#" className="nav-link dropdown-toggle" data-toggle="dropdown">Cars Manage</a>
                                    <div className="dropdown-menu rounded-0 m-0">
                                        <NavLink to="/carlistingmanage" className="dropdown-item">Car Listing Manage</NavLink>
                                        <NavLink to="/caradd" className="dropdown-item">Car ADD</NavLink>
                                        <NavLink to="/bookingmanage" className="dropdown-item">Car booking manage</NavLink>

                                    </div>
                                </div>
                                <div className="nav-item dropdown">
                                    <a href="#" className="nav-link dropdown-toggle" data-toggle="dropdown">Cars</a>
                                    <div className="dropdown-menu rounded-0 m-0">
                                        <NavLink to="/carlisting" className="dropdown-item">Car Listing</NavLink>
                                        <NavLink to="/cardetail" className="dropdown-item">Car Detail</NavLink>
                                        <NavLink to="/carbooking" className="dropdown-item">Car Booking</NavLink>
                                    </div>
                                </div>
                                <div className="nav-item dropdown">
                                    <a href="#" className="nav-link dropdown-toggle" data-toggle="dropdown">Pages</a>
                                    <div className="dropdown-menu rounded-0 m-0">
                                        <a href="team.html" className="dropdown-item">The Team</a>
                                        <a href="testimonial.html" className="dropdown-item">Testimonial</a>
                                    </div>
                                </div>
                                <NavLink to="/contact" className="nav-item nav-link">Contact</NavLink>
                            </div>
                        </div>
                    </nav>
                </div>
            </div>
        </div>
    )
}

export default AHeader
