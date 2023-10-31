var addTwoPromises = async function (promise1, promise2) {
  const firstPromise = await promise1;
  const secondPromise = await promise2;
  return Promise.resolve(firstPromise + secondPromise);
};
