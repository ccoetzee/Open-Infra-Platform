<?xml version="1.0" encoding="utf-8"?>

<effect>
  <pipelinestate name="main">
    <D3D11>
      <VertexShader filename="D3D/PointCloudShader.hlsl" entry="VS_main"/>
      <PixelShader filename="D3D/PointCloudShader.hlsl" entry="PS_main"/>
    </D3D11>
    <D3D12>
      <VertexShader filename="D3D/PointCloudShader.hlsl" entry="VS_main"/>
      <PixelShader filename="D3D/PointCloudShader.hlsl" entry="PS_main"/>
    </D3D12>
  </pipelinestate>  
</effect>