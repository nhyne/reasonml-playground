let component = ReasonReact.statelessComponent("card");

let make = (~name, ~description, ~href, _children) => {
  ...component,
  render: _self => <div> {ReasonReact.string(name)} </div>,
};
