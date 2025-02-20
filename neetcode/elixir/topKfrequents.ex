defmodule Solution do
  def top_k_frequent(nums, k) do
    nums
    |> Enum.frequencies()
    |> Enum.to_list()
    |> Enum.sort_by(fn {_num, count} -> -count end)
    |> Enum.take(k)
    |> Enum.map(fn {num, _count} -> num end)
  end
end
IO.inspect Solution.top_k_frequent([1,2,3,3,4,4,4,4,6,6,6,6,6,6], 2)
