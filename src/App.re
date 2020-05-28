[@react.component]
let make = (~name, ~children) => {
  let (count, setCount) = React.useState(() => 0);
  <div>
    <p>
      {React.string(name ++ " clicked " ++ string_of_int(count) ++ " times")}
    </p>
    <button
      onClick={_ => setCount(_ => count + 1)}
      className="bg-red-500 hover:bg-blue-700 text-white font-bold py-2 px-4 rounded">
      {React.string("increase")}
    </button>
    children
  </div>;
};
