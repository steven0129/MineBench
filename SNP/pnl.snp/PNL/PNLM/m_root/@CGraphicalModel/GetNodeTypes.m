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
%% [OUTPUTOut1] = GetNodeTypes(varargin)
%%
%% C++ prototype: void GetNodeTypes(pnl::CGraphicalModel *self,pnl::pConstNodeTypeVector *OUTPUT)
%%

function [OUTPUTOut1] = GetNodeTypes(varargin)

[OUTPUTOut1] = feval('pnl_full', 'CGraphicalModel_GetNodeTypes_wrap', varargin{:});
for k = 1:length(OUTPUTOut1)
    OUTPUTOut1{k} = CNodeType('%%@#DefaultCtor', OUTPUTOut1{k});
end

return
