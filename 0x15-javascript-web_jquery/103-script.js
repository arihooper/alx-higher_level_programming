$(document).ready(function() {
      // Click event handler for the translate button
      $('#btn_translate').click(function() {
        let langCode = $('#language_code').val();
        fetchTranslation(langCode);
      });

      // Keypress event handler for the language code input field
      $('#language_code').keypress(function(event) {
        if (event.keyCode === 13) {
          let langCode = $(this).val();
          fetchTranslation(langCode);
          event.preventDefault();
        }
      });

      function fetchTranslation(langCode) {
        fetch(`https://www.fourtonfish.com/hellosalut/hello/${langCode}`)
          .then(response => response.json())
          .then(data => {
            $('#hello').text(data.hello);
          })
          .catch(error => {
            console.error('Error fetching translation:', error);
            $('#hello').text('Error fetching translation.');
          });
      }
    });
