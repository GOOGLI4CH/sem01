let azaza = document.getElementById("azaza")
let smesharik = document.getElementById("smesharik")
let sosedka = document.getElementById("sosedka")

azaza.addEventListener("mouseover", () => {
    document.querySelector("#sub").style.display="block"
})
smesharik.addEventListener("click", () => {
    document.querySelector("#smesharik").style.border="10px solid red"
})
sosedka.addEventListener("mouseover", () => {
    document.querySelector("#sosedka").src='img/end.jpg'
})
sosedka.addEventListener("mouseout", () => {
    document.querySelector("#sosedka").src='img/sosedka.jpg'
})

document.querySelector('button').addEventListener('click', ()=> {
    let write = document.querySelectorAll('.info')
    for ( let i=0; i<write.length; i++) {
        if ( write[i] != ''){
            let list = document.createElement("li")
            list.innerHTML = write[i].value
            document.getElementById("footer").append(list)
        }
    }
})
