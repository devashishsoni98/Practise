const numbers = [1,2,3,4,5,6,7,8,9,10];

const isEven = x => x % 2 === 0 ;

const evenNumbers = numbers.filter(isEven);

console.log (evenNumbers);

const words = [
    'hello',
    'goodbye',
    'the',
    'something',
    'same',
    'some-word',
];

const createLengthTest = minLength => 
    word => word.length > minLength;

const longWords = words.filter(createLengthTest(5));

console.log(longWords);
