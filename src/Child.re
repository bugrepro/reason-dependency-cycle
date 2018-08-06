let component = ReasonReact.statelessComponent("Child");

let make = (~app, _children) => {
  ...component,
  render: _self => {
    let message =
      "You've clicked this "
      ++ string_of_int(app.ReasonReact.state.App.count)
      ++ " times(s)";
    <div>
      <button onClick=(_event => app.send(App.Click))>
        (ReasonReact.string(message))
      </button>
      <button onClick=(_event => app.send(Toggle))>
        (ReasonReact.string("Toggle greeting"))
      </button>
      (app.state.show ? ReasonReact.string("Hello") : ReasonReact.null)
    </div>;
  },
};