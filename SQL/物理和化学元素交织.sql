
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
-- =============================================
-- Author:		�� ���� ��
-- Create date: 2020��4��2��
-- Description:	����ͻ�ѧԪ�ؽ�֯
-- =============================================
alter PROCEDURE  [dbo].[sp_interweave_elements]
	-- Add the parameters for the stored procedure here
	--<@Param1, sysname, @p1> <Datatype_For_Param1, , int> = <Default_Value_For_Param1, , 0>,
AS
BEGIN
	-- SET NOCOUNT ON added to prevent extra result sets from
	-- interfering with SELECT statements.
	SET NOCOUNT ON;

	SELECT  [id]  ,[name]  FROM [EverSource].[dbo].[chemical] AS C
	SELECT  [id]  ,[name]  FROM [EverSource].[dbo].[physical] AS P
	SELECT  [id]  ,physicalid, chemicalid FROM [EverSource].[dbo].[inter_chemical] AS IC
	SELECT  [id]  ,chemicalid, physicalid FROM [EverSource].[dbo].[inter_physical] AS IP
END
GO
