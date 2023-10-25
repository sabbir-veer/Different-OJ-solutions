function memoize(fn) {
  let memo = {};
  return function (...args) {
    const key = JSON.stringify(args);
    if (key in memo) return memo[key];
    else {
      memo[key] = fn(...args);
      return memo[key];
    }
  };
}

let callCount = 0;
const memoizedFn = memoize(function (a, b) {
  callCount += 1;
  return a + b;
});
console.log(memoizedFn(0,0)); // 5
console.log(memoizedFn(0,0)); // 5
console.log(callCount); // 1
