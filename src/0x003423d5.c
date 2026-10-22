/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 677AF6ECED29F2AE575CED95379C7042EB8C97C0B8FEE97E369D1282D702A161
 * Entry: 0x003423d5, Ghidra index: 12688, label: FUN_003423d5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003423d5(char *param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_40 [4];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  
  iVar2 = (int)param_1;
  FUN_00344fe4(local_40);
  piVar1 = (int *)((int)param_1 + 0x1d0);
  param_1 = "urn:schemas-upnp-org:service:WANPPPConnection:1";
  if (*piVar1 == 0) {
    param_1 = "urn:schemas-upnp-org:service:WANIPConnection:1";
  }
  uVar3 = FUN_0033df31(iVar2 + 0x2d8,0x600,
                       "<s:Envelope\r\n    xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\"\r\n    s:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\">\r\n  <s:Body>\r\n    <u:AddPortMapping xmlns:u=\"%s\">\r\n      <NewRemoteHost></NewRemoteHost>\r\n      <NewExternalPort>%u</NewExternalPort>\r\n      <NewProtocol>UDP</NewProtocol>\r\n      <NewInternalPort>%u</NewInternalPort>\r\n      <NewInternalClient>%u.%u.%u.%u</NewInternalClient>\r\n      <NewEnabled>1</NewEnabled>\r\n      <NewPortMappingDescription>Xbox (%u.%u.%u.%u:%u) %u UDP</NewPortMappingDescription>\r\n      <NewLeaseDuration>0</NewLeaseDuration>\r\n    </u:AddPortMapping>\r\n  </s:Body>\r\n</s:Envelope>\r\n\r\n"
                       ,param_1,param_2,param_2,local_3c,local_3b,local_3a,local_39,local_3c,
                       local_3b,local_3a,local_39,param_2,param_2);
  *(undefined4 *)(iVar2 + 0x2d4) = uVar3;
  return;
}
