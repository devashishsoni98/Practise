const createMultiplier = y => x => x * y;

const double = createMultiplier(2);
const triple = createMultiplier(3);
const quadruple = createMultiplier(4);

const u= quadruple(3);

console.log(u);