diff[i] = new Set(nums.slice(0, i + 1)).size - 
          new Set(nums.slice(i + 1)).size;
