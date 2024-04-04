$(document).ready(function() {
      $('#btn_translate').click(function() {
        let langCode = $('#language_code').val();
        fetch(`https://www.fourtonfish.com/hellosalut/hello/${langCode}`)
          .then(response => response.json())
          .then(data => {
            $('#hello').text(data.hello);
          })
          .catch(error => {
            console.error('Error fetching translation:', error);
            $('#hello').text('Error fetching translation.');
          });
      });
    });
