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
%% [result] = GetModelDomain(varargin)
%%
%% C++ prototype: pnl::CModelDomain *GetModelDomain(pnl::CGraphicalModel const *self)
%%

function [result] = GetModelDomain(varargin)

[result] = feval('pnl_full', 'CGraphicalModel_GetModelDomain_wrap', varargin{:});
result = CModelDomain('%%@#DefaultCtor', result);

return
