%% This file were automatically generated by SWIG's MatLab module
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%                                                                         %%
%%                INTEL CORPORATION PROPRIETARY INFORMATION                %%
%%   This software is supplied under the terms of a license agreement or   %%
%%  nondisclosure agreement with Intel Corporation and may not be copied   %%
%%   or disclosed except in accordance with the terms of that agreement.   %%
%%       Copyright (c) 2003 Intel Corporation. All Rights Reserved.        %%
%%                                                                         %%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% [result] = MultiplyInSelf(varargin)
%%
%% C++ prototype: pnl::CPotential &operator *=(pnl::CPotential *self,pnl::CPotential const &pSmallPotential)
%%

function [result] = MultiplyInSelf(varargin)

[result] = feval('pnl_full', 'CPotential_MultiplyInSelf_wrap', varargin{:});
result = CPotential('%%@#DefaultCtor', result);

return
