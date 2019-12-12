import numpy as np
import matplotlib.pyplot as plt
%matplotlib inline
from scipy.integrate import quad
from scipy.interpolate import interp1d
from scipy.optimize import curve_fit, fsolve

def dx_dt(dx,dt):
    
