function validateEmail() {
    var email = document.querySelector('input[name="email"]').value;
    if (!email.endsWith("@gmail.com")) {
        alert("Only Gmail addresses are allowed.");
        return false;
    }
    return true;
}
