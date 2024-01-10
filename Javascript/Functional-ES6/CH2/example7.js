const Person = ({ name, age, job }) => {
    var _name = name;
    var _age = age;
    var _job = job;

    return {
        getName: () => _name,  // only these functions can access the above variables
        getAge: () => _age,
        getJob: () => _job,

        setJob: newJob => _job = newJob,
        setAge: newAge => _age = newAge,
    };
}

const me = Person({ name: 'Devashish', age: 25, job: 'developer' });
console.log(me.getJob());
me.setJob('senior developer');
console.log(me.getJob());
const someone = Person({ name: 'Someone', age: 26, job: 'php developer' });
console.log(someone.getAge());
someone.setAge(27);
console.log(someone.getAge());
