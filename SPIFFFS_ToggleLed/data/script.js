 function toggleLED() {
        fetch('/toggle') // Send a GET request to the ESP32 server
            .then(response => response.text())
            .then(data => {
                console.log(data); // Log the response for debugging
            })
            .catch(error => {
                console.error('Error:', error);
            });
    }