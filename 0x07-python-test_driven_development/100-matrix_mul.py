#!/usr/bin/python3
"""

This module contains a function that multiplies 2 matrices

"""


def matrix_mul(m_a, m_b):
    """This function multiplies two matrices

    Args:
        m_a (list of lists of int/float): Matrix to be multiplied
        m_b (list of lists of int/float): Matrix to be multiplied

    Raises:
        TypeError: If m_a or m_b is not a list
        TypeError: If m_a or m_b is not a list of lists
        TypeError: If one element of list of lists is not int/float
        TypeError: If row of m_a or m_b are not the same size
        ValueError: If m_a or m_b is empty
        ValueError: If m_a and m_b cannot be multiplied

    Returns:
        A new list which is the outcome of the multiplication

    """

    if not isinstance(m_a, list):
        raise TypeError("m_a must be a list")
    if not isinstance(m_b, list):
        raise TypeError("m_b must be a list")

    if not all(isinstance(row, list) for row in m_a):
        raise TypeError("m_a must be a list of lists")
    if not all(isinstance(row, list) for row in m_b):

