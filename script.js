// Clear browser cache for development testing purposes
window.onload = function() {
    if(!localStorage.getItem('firstLoad')) {
        localStorage.setItem('firstLoad', 'true');
        window.location.reload();
    } else {
        localStorage.removeItem('firstLoad');
    }
};
