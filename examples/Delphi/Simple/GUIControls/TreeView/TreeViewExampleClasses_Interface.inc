(*****************************************)
(*      This file is autogenerated       *)
(*   Any manual changes will be LOST!    *)
(*****************************************)
(* Generated 2002-04-05 15:18:32         *)
(*****************************************)
(* This file should be stored in the     *)
(* same directory as the form/datamodule *)
(* with the corresponding model          *)
(*****************************************)
(* Copyright notice:                     *)
(*                                       *)
(*****************************************)

{$IFNDEF TreeViewExampleClasses_Interface.inc}
{$DEFINE TreeViewExampleClasses_Interface.inc}

{$IFNDEF TreeViewExampleClasses_unitheader}
unit TreeViewExampleClasses;
{$ENDIF}

interface

uses
  // interface uses
  // interface dependencies
  // attribute classes
  BoldAttributes,
  // other
  Classes,
  Controls, // for TDate
  SysUtils,
  BoldDefs,
  BoldSubscription,
  BoldDeriver,
  BoldElements,
  BoldDomainElement,
  BoldSystemRT,
  BoldSystem;

type
  { forward declarations of all classes }

  TBusinessClassesRoot = class;
  TBusinessClassesRootList = class;
  TFrame = class;
  TFrameList = class;
  TMTB = class;
  TMTBList = class;
  TMTB_Comps = class;
  TMTB_CompsList = class;
  TParts = class;
  TPartsList = class;
  TBrake = class;
  TBrakeList = class;
  TGear = class;
  TGearList = class;
  TWheel = class;
  TWheelList = class;

  TBusinessClassesRoot = class(TBoldObject)
  private
  protected
  public
  end;

  TFrame = class(TBusinessClassesRoot)
  private
    function _Get_M_Name: TBAString;
    function _GetName: String;
    procedure _SetName(NewValue: String);
    function _Get_M_FrameSize: TBAInteger;
    function _GetFrameSize: Integer;
    procedure _SetFrameSize(NewValue: Integer);
    function _GetPartOf: TMTBList;
  protected
  public
    property M_Name: TBAString read _Get_M_Name;
    property M_FrameSize: TBAInteger read _Get_M_FrameSize;
    property M_PartOf: TMTBList read _GetPartOf;
    property Name: String read _GetName write _SetName;
    property FrameSize: Integer read _GetFrameSize write _SetFrameSize;
    property PartOf: TMTBList read _GetPartOf;
  end;

  TMTB = class(TBusinessClassesRoot)
  private
    function _Get_M_Name: TBAString;
    function _GetName: String;
    procedure _SetName(NewValue: String);
    function _GetConsistsOf: TPartsList;
    function _GetMTB_Comps: TMTB_CompsList;
    function _GetBuiltAround: TFrame;
    function _Get_M_BuiltAround: TBoldObjectReference;
    procedure _SetBuiltAround(value: TFrame);
  protected
  public
    property M_Name: TBAString read _Get_M_Name;
    property M_ConsistsOf: TPartsList read _GetConsistsOf;
    property M_MTB_Comps: TMTB_CompsList read _GetMTB_Comps;
    property M_BuiltAround: TBoldObjectReference read _Get_M_BuiltAround;
    property Name: String read _GetName write _SetName;
    property ConsistsOf: TPartsList read _GetConsistsOf;
    property MTB_Comps: TMTB_CompsList read _GetMTB_Comps;
    property BuiltAround: TFrame read _GetBuiltAround write _SetBuiltAround;
  end;

  TMTB_Comps = class(TBusinessClassesRoot)
  private
    function _GetPartOf: TMTB;
    function _Get_M_PartOf: TBoldObjectReference;
    function _GetConsistsOf: TParts;
    function _Get_M_ConsistsOf: TBoldObjectReference;
  protected
  public
    property M_PartOf: TBoldObjectReference read _Get_M_PartOf;
    property M_ConsistsOf: TBoldObjectReference read _Get_M_ConsistsOf;
    property PartOf: TMTB read _GetPartOf;
    property ConsistsOf: TParts read _GetConsistsOf;
  end;

  TParts = class(TBusinessClassesRoot)
  private
    function _Get_M_Model: TBAString;
    function _GetModel: String;
    procedure _SetModel(NewValue: String);
    function _GetPartOf: TMTBList;
    function _GetMTB_Comps: TMTB_CompsList;
  protected
  public
    property M_Model: TBAString read _Get_M_Model;
    property M_PartOf: TMTBList read _GetPartOf;
    property M_MTB_Comps: TMTB_CompsList read _GetMTB_Comps;
    property Model: String read _GetModel write _SetModel;
    property PartOf: TMTBList read _GetPartOf;
    property MTB_Comps: TMTB_CompsList read _GetMTB_Comps;
  end;

  TBrake = class(TParts)
  private
  protected
  public
  end;

  TGear = class(TParts)
  private
  protected
  public
  end;

  TWheel = class(TParts)
  private
  protected
  public
  end;

  TBusinessClassesRootList = class(TBoldObjectList)
  protected
    function GetBoldObject(index: Integer): TBusinessClassesRoot;
    procedure SetBoldObject(index: Integer; NewObject: TBusinessClassesRoot);
  public
    function Includes(anObject: TBusinessClassesRoot): Boolean;
    function IndexOf(anObject: TBusinessClassesRoot): Integer;
    procedure Add(NewObject: TBusinessClassesRoot);
    function AddNew: TBusinessClassesRoot;
    procedure Insert(index: Integer; NewObject: TBusinessClassesRoot);
    property BoldObjects[index: Integer]: TBusinessClassesRoot read GetBoldObject write SetBoldObject; default;
  end;

  TFrameList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TFrame;
    procedure SetBoldObject(index: Integer; NewObject: TFrame);
  public
    function Includes(anObject: TFrame): Boolean;
    function IndexOf(anObject: TFrame): Integer;
    procedure Add(NewObject: TFrame);
    function AddNew: TFrame;
    procedure Insert(index: Integer; NewObject: TFrame);
    property BoldObjects[index: Integer]: TFrame read GetBoldObject write SetBoldObject; default;
  end;

  TMTBList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TMTB;
    procedure SetBoldObject(index: Integer; NewObject: TMTB);
  public
    function Includes(anObject: TMTB): Boolean;
    function IndexOf(anObject: TMTB): Integer;
    procedure Add(NewObject: TMTB);
    function AddNew: TMTB;
    procedure Insert(index: Integer; NewObject: TMTB);
    property BoldObjects[index: Integer]: TMTB read GetBoldObject write SetBoldObject; default;
  end;

  TMTB_CompsList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TMTB_Comps;
    procedure SetBoldObject(index: Integer; NewObject: TMTB_Comps);
  public
    function Includes(anObject: TMTB_Comps): Boolean;
    function IndexOf(anObject: TMTB_Comps): Integer;
    procedure Add(NewObject: TMTB_Comps);
    function AddNew: TMTB_Comps;
    procedure Insert(index: Integer; NewObject: TMTB_Comps);
    property BoldObjects[index: Integer]: TMTB_Comps read GetBoldObject write SetBoldObject; default;
  end;

  TPartsList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TParts;
    procedure SetBoldObject(index: Integer; NewObject: TParts);
  public
    function Includes(anObject: TParts): Boolean;
    function IndexOf(anObject: TParts): Integer;
    procedure Add(NewObject: TParts);
    function AddNew: TParts;
    procedure Insert(index: Integer; NewObject: TParts);
    property BoldObjects[index: Integer]: TParts read GetBoldObject write SetBoldObject; default;
  end;

  TBrakeList = class(TPartsList)
  protected
    function GetBoldObject(index: Integer): TBrake;
    procedure SetBoldObject(index: Integer; NewObject: TBrake);
  public
    function Includes(anObject: TBrake): Boolean;
    function IndexOf(anObject: TBrake): Integer;
    procedure Add(NewObject: TBrake);
    function AddNew: TBrake;
    procedure Insert(index: Integer; NewObject: TBrake);
    property BoldObjects[index: Integer]: TBrake read GetBoldObject write SetBoldObject; default;
  end;

  TGearList = class(TPartsList)
  protected
    function GetBoldObject(index: Integer): TGear;
    procedure SetBoldObject(index: Integer; NewObject: TGear);
  public
    function Includes(anObject: TGear): Boolean;
    function IndexOf(anObject: TGear): Integer;
    procedure Add(NewObject: TGear);
    function AddNew: TGear;
    procedure Insert(index: Integer; NewObject: TGear);
    property BoldObjects[index: Integer]: TGear read GetBoldObject write SetBoldObject; default;
  end;

  TWheelList = class(TPartsList)
  protected
    function GetBoldObject(index: Integer): TWheel;
    procedure SetBoldObject(index: Integer; NewObject: TWheel);
  public
    function Includes(anObject: TWheel): Boolean;
    function IndexOf(anObject: TWheel): Integer;
    procedure Add(NewObject: TWheel);
    function AddNew: TWheel;
    procedure Insert(index: Integer; NewObject: TWheel);
    property BoldObjects[index: Integer]: TWheel read GetBoldObject write SetBoldObject; default;
  end;

function GeneratedCodeCRC: String;

implementation

{$ENDIF}

 