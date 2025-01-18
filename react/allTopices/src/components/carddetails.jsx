import "./carddetails.css";
import styled from "styled-components";
// old mathode to pass the data
// function CardDetails(props) {
//   return (
//     <li  className=" bg-light rounded mx-2 text-center">
//       <a href="#">
//         <img src={props.data.image} alt="Product Image" />
//       </a>
//       <div className="img-details mb-2 rounded">
//         <h6 className="pt-2">{props.data.name}</h6>
//         <p className="s2-price">
//           Rs. {props.data.price}{" "}
//           <strike className="text-muted">Rs. {props.data.actualprice}</strike>
//         </p>
//         <p className="mt-1">{props.data.rating}</p>
//         <p>{props.data.extrainfo}</p>
//         <button type="button" className="s2-buyitnow">
//           BUY IT NOW
//         </button>
//       </div>
//     </li>
//   );
// }

// styled components  with bake tick
// let ProductName = styled.h6`
//   color: green;
//   font-size: 1.1rem;
// `;

// styled components ass object
let ProductName = styled.h6({
  color: "red",
  fontSize: "1.2rem",
});

function CardDetails({ data }) {
  // Destructuring the data object
  let { id, image, name, price, actualprice, rating, extrainfo } = data;
  return (
    <li
      key={id}
      className="list-item text-center"
      >
      <a href="#">
        <img src={image} alt="Product Image" />
      </a>
      <div className="img-details mb-2 rounded">
        {/* styled components */}
        <ProductName>{name}</ProductName>
        <p className="s2-price">
          Rs. {price} <strike className="text-muted">Rs. {actualprice}</strike>
        </p>
        <p className="mt-1">{rating}</p>
        <p>{extrainfo}</p>
        <button type="button" className="s2-buyitnow">
          BUY IT NOW
        </button>
      </div>
    </li>
  );
}
export default CardDetails;
