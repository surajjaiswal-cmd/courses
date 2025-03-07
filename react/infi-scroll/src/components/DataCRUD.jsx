import { useEffect, useState } from "react";

export const DataCrud = ({ data }) => {
  const [bgColors, setBgColors] = useState({});

  const randomString = () => {
    const length = 6;
    const characters = "0123456789ABCDEF";
    let result = "";
    for (let i = 0; i < length; i++) {
      const randomIndex = Math.floor(Math.random() * characters.length);
      result += characters.charAt(randomIndex);
    }
    return result;
  };

  useEffect(() => {
    const colors = {};
    if (Array.isArray(data)) {
      data.forEach((post) => {
        if (bgColors[post.id]) {
          colors[post.id] = bgColors[post.id];
        } else {
          colors[post.id] = `#${randomString()}50`;
        }
      });
    }
    setBgColors(colors);
  }, [data]);

  return (
    <>
      {data.map((post) => {
        const { id, title, body } = post;
        return (
          <div
            className="p-3 my-2  rounded-1 border"
            key={id}
            style={{
              backgroundColor: bgColors[id],
            }}>
            <li className="list-item ms-3"></li>
            <h6 className="comment">{title}</h6>
            <p className="comment">{body}</p>
            <br />
          </div>
        );
      })}
    </>
  );
};
