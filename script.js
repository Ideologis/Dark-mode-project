const sunMoon = document.querySelector('.sun-moon-container')

document.querySelector('.theme-toggle-button').addEventListener('click', () => {
    document.body.classList.toggle('dark')

    const currentRotation = parseInt(getComputedStyle(sunMoon).getPropertyValue('--rotation'))
    sunMoon.style.setProperty('--rotation', currentRotation + 360);
});