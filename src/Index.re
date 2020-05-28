[%bs.raw {|require("./styles/tailwind.css")|}];

ReactDOMRe.renderToElementWithId(
  <App name="adam">
    <div> <p> {React.string("something in the root!")} </p> </div>
    <TaskList />
  </App>,
  "root",
);
