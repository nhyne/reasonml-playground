[@react.component]
let make = () => {
  <div>
    <div className="flex mb-4">
      <div className="w-full bg-gray-500 h-12">
        <h1 className="text-3xl"> {ReasonReact.string("list")} </h1>
        <Task name="Task" description="something" />
        <Task name="Code ocaml" description="Do some ocaml shit" />
      </div>
    </div>
  </div>;
};
