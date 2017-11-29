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
%% [result] = Marginalize(varargin)
%%
%% C++ prototype: pnl::CIDPotential *Marginalize(pnl::CIDPotential const *self,pnl::intVector const &smallDomainIn,int maximize,pnl::CIDPotential *output)
%%

function [result] = Marginalize(varargin)

[result] = feval('pnl_full', 'CIDPotential_Marginalize_wrap', varargin{:});
result = CIDPotential('%%@#DefaultCtor', result);

return
