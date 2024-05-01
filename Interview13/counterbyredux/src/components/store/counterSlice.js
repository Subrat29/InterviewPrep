import { createSlice } from "@reduxjs/toolkit";

const initialState = {
    cnt: 0
}

const counter = createSlice({
    name: 'counter',
    initialState,
    reducers: {
        increaseCounter: (state, action) => {
            state.cnt = action.payload
        },
        decreaseCounter: (state, action) => {
            state.cnt = action.payload
        }
    }
})

export const { increaseCounter, decreaseCounter } = counter.actions
export default counter.reducer