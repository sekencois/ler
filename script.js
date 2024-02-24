const audio = document.getElementById('audio');
const record = document.querySelector('.record');

audio.addEventListener('play', function() {
  record.style.animationPlayState = 'running';
});

audio.addEventListener('pause', function() {
  record.style.animationPlayState = 'paused';
});
