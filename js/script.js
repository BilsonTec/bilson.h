const burgerMenuButton = document.querySelector('.header__menu-mobile');
const burgerMenuButtonIcon = document.querySelector('.header__menu-mobile'); 
const burgerMenu = document.querySelector('.burger-menu');

burgerMenuButton.addEventListener('click', () => {
    burgerMenu.classList.toggle('open');
    const isOpen = burgerMenu.classList.contains('open');
    burgerMenuButtonIcon.className = isOpen ? 'fa-solid fa-xmark' : 'fa-solid fa-bars'; 
});

