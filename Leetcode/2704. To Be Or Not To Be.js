var expect = function (val) {
  function toBe(x) {
    if (val === x) return true;
    else throw new Error("Not Equal");
  }
  function notToBe(x) {
    if (val !== x) return true;
    else throw new Error("Equal");
  }
  return {
    toBe,
    notToBe,
  };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
