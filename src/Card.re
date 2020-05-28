[@react.component]
let make = (~name, ~description, ~href) => {
  <div>
    <a href> {ReasonReact.string(description)} </a>
    <div> {ReasonReact.string(name)} </div>
  </div>;
};
