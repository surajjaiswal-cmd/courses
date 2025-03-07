//old mathode
//======================================================
// {
//   // import {createStore } from "redux";
//   // import { composeWithDevTools } from "redux-devtools-extension";
//   //   // action types
//   //   const ADD_TASK = "task/add";
//   //   const DELETE_TASK = "task/delete";
//   //   // initial state
//   //   const intialState = {
//   //     tasks: [],
//   //   };
//   //   //action creator
//   //   export const addTask = (task) => {
//   //     return {
//   //       type: ADD_TASK,
//   //       payload: task,
//   //     };
//   //   };
//   //   export const deleteTask = (id) => {
//   //     return {
//   //       type: DELETE_TASK,
//   //       payload: id,
//   //     };
//   //   };
//   //   // reducer
//   //   const taskReducer = (state = intialState, action) => {
//   //     switch (action.type) {
//   //       case ADD_TASK:
//   //         return {
//   //           ...state,
//   //           tasks: [...state.tasks, action.payload],
//   //         };
//   //       case DELETE_TASK:
//   //         const upadatedTasks = state.tasks.filter(
//   //           (task, index) => index !== action.payload
//   //         );
//   //         return {
//   //           ...state,
//   //           tasks: upadatedTasks,
//   //         };
//   //       default:
//   //         return state;
//   //     }
//   //   };
//   // // create the redux store using the reducer this this old mathode before redux toolkit
//   // // export const store = createStore(taskReducer,composeWithDevTools());
//   // // create the redux store using the reducer this this new mathode after redux toolkit
//   // export const store = configureStore({
//   //   reducer: {
//   //     taskReducer,
//   //   },
//   // });
//   // // dispatch the action
//   // store.dispatch(addTask("mango"));
//   // store.dispatch(addTask("apple"));
// }
//=================================================

import { configureStore, createSlice } from "@reduxjs/toolkit";

// Initial state
const initialState = []

// Create a slice
const taskSlice = createSlice({
  name: "tasks",
  initialState,
  reducers: {
    addTask: (state, action) => {
      state.push(action.payload);
    },
    deleteTask: (state, action) => {
     return state.filter((_, index) => index !== action.payload);
    },
  },
});

// Export actions
export const { addTask, deleteTask } = taskSlice.actions;

// Create Redux store
export const store = configureStore({
  reducer: {
    tasks: taskSlice.reducer, // Use slice reducer
  },
});

// Dispatch actions
store.dispatch(addTask("mango"));
store.dispatch(addTask("apple"));

// console.log(store.getState()); // Check the updated state
