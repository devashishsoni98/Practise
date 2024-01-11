const personInfo = {    
    name:'John Doe',
    age:45,
    hairColor:'Brown',
    eyeColor:'blue',
};

const careerData = {
    title:'developer',
    company:'ABC Software',
};

const person = {
    ...personInfo,
    ...careerData,  //contains all the properties from above objects
};

const person2 = {
    name:personInfo.name,
    ...careerData,   // contains selected propersties only
};

const updatedPerson = {
    name: 'Devashish Soni'
};

const person3 = {
    ...personInfo,
    ...updatedPerson,  // if there are two similar properties, the one which is defined last (at bottom or the lower one) will be used
};

console.log(person3);


const numbers = [1,2,3,4,5];  // alternate way to add would be to use the push function , but that will cause mutation
const newNumbers = [
    0,
    ...numbers,   // we can add numbers before or after the original array while avoiding mutation
    6,
    7,
    8,
];

console.log(newNumbers);