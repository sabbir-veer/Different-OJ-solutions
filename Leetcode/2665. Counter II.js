var createCounter = function (init) {
  let current = init;
  function increment() {
    return ++current;
  }
  function decrement() {
    return --current;
  }
  function reset() {
    current = init;
    return current;
  }
  return {
    increment,
    decrement,
    reset,
  };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
