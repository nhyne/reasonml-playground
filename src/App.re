module Api = {
  let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();

  let httpLink =
    ApolloLinks.createHttpLink(~uri="localhost:8083/api/graphql", ());

  let instance =
    ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());

  module Something = [%graphql
    {|
        query todoList {
            getTodoList(todoListId: 2) {
                name
            }
        }
    |}
  ];

  let getResults = query =>
    Js.Promise.(
      Fetch.fetchWithInit(
        "localhost:8083/api/",
        Fetch.RequestInit.make(
          ~method_=Post,
          //          ~body=Fetch.BodyInit.make(Js.Json.stringify),
          (),
        ),
      )
    );
};

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
