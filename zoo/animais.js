document.querySelectorAll('.tab').forEach(tab => {
    tab.addEventListener('click', function() {
        document.querySelectorAll('.tab').forEach(t => t.classList.remove('active'));
        document.querySelectorAll('.tab-content').forEach(tc => tc.classList.remove('active'));
        this.classList.add('active');
        document.getElementById(this.dataset.tab).classList.add('active');
    });
});

document.getElementById('search').addEventListener('input', function() {
    const searchValue = this.value.toLowerCase();
    const categorias = ['mamiferos', 'aves', 'repteis'];
    
    categorias.forEach(categoria => {
        const animals = document.querySelectorAll(`#${categoria} ul li`);
        animals.forEach(function(animal) {
            const animalName = animal.querySelector('h4').textContent.toLowerCase();
            if (animalName.includes(searchValue)) {
                animal.style.display = '';
            } else {
                animal.style.display = 'none';
            }
        });
    });
});
