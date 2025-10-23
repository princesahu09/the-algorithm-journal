        if(index[i] == i) target[index[i]] = nums[i];

        else {
            for(int j = index[i]; j < i + 1; j++) {
                int temp = target[j];
                target[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    return target;
}