const audio = document.getElementById('audio');
const record = document.querySelector('.record');

audio.volume = 0.5; // Mengatur volume audio

audio.addEventListener('play', function() {
  record.style.animationPlayState = 'running';
});

audio.addEventListener('pause', function() {
  record.style.animationPlayState = 'paused';
});

// Otomatis memutar audio ketika dokumen dimuat
document.addEventListener('DOMContentLoaded', function() {
  audio.play();
});
