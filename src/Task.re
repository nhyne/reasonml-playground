[@react.component]
let make = (~name, ~description) => {
  <div className="max-w-sm rounded overflow-hidden shadow-lg">
    <div> {ReasonReact.string(name)} </div>
    <div className="px-6 py-4">
      <span
        className="inline-block bg-gray-200 rounded-full px-3 py-1 text-sm font-semibold text-gray-700">
        {ReasonReact.string("#winter")}
      </span>
    </div>
  </div>;
};
