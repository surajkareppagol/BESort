# BE Sort

A 📶 sorting algorithm inspired by **quick sort**.This program is created in **C** language.

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20Output.png)

## How it works ?

There are two pointers (Not actual C pointers, just normal variables) `pointElementI` and `pointElementJ`, it works in two stages, in first stage the `pointElementI` is fixed and in second stage `pointElementJ` is fixed, but in both stages `i` is incremented and `j` is decremented.

To explain this i have created these 👇, the **red** colored star indicates a new stage within the main stage, at this stage `i` again points to it's initial value, but `j` is decremented in first stage and vice versa.

## How to use it ?

You can use this program in your projects to sort numbers, if you want to test it pass `-t` option.

```bash
./besort -t
```

## Is it better ?

I have tested it for different set of random numbers, for 1000, it took about `0.002498` and quick sort took about `0.000580`.

### Stage One

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20A.png)

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20B.png)

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20C.png)

### Stage Two

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20D.png)

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20E.png)

![BESort](https://raw.githubusercontent.com/surajkareppagol/Project-Assets/main/BESort/BESort%20F.png)
