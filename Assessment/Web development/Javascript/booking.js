document.addEventListener("DOMContentLoaded", function () {
    const bookingType = document.getElementById("bookingType");
    const dateInput = document.getElementById("date");
    const timeInput = document.getElementById("time");
    const slotInput = document.getElementById("slot");

    
    dateInput.style.display = "none";
    timeInput.style.display = "none";
    slotInput.style.display = "none";

    
    bookingType.addEventListener("change", function () {
        const selectedBooking = bookingType.value;

        if (selectedBooking === "fullDay") {
            
            dateInput.style.display = "block";
            timeInput.style.display = "none";
            slotInput.style.display = "none";
        } else if (selectedBooking === "halfDay") {
            
            dateInput.style.display = "block";
            timeInput.style.display = "none";
            slotInput.style.display = "block";
        } else if (selectedBooking === "hourly") {
            
            dateInput.style.display = "block";
            timeInput.style.display = "block";
            slotInput.style.display = "none";
        } else {
            
            dateInput.style.display = "none";
            timeInput.style.display = "none";
            slotInput.style.display = "none";
        }
    });
});
