import items from "../api/items.json";
import CardDetails from "./carddetails";
import carddetails from "./carddetails";
function Cards() {
  return (
    <>
      <ul
        className="cards-folder"
        style={{
          padding: "20px",
          border: "1px solid #ccc",
          marginTop: "1rem",
        }}>
        {items.map((item) => (
          <CardDetails data={item} key={item.id} />
        ))}
      </ul>
    </>
  );
}
export default Cards;
