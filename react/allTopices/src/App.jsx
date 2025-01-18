import "bootstrap/dist/css/bootstrap.min.css";
import Cards from "./components/cards";
import EventHandel from "./components/eventHandel";
import UseState from "./components/usestate";
import DriveState from "./components/drivestate";
import LiftUpState from "./components/liftStateUp";
import UserProfile from "./components/shortcircuit";

function App() {
  return (
    <div className="container mt-5">
      <UserProfile />
      <EventHandel />
      <UseState />
      <DriveState />
      <LiftUpState />
      <Cards />
    </div>
  );
}

export default App;
