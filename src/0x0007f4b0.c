/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E347CA29F9C30672512EA2A6881E4D9945DBF89A0A9ABE4A108A5789C532E2C4
 * Entry: 0x0007f4b0, Ghidra index: 1501, label: FUN_0007f4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dd48;
extern uint32_t DAT_0046995c;
extern char s_z__syslinkcoop__0040dc04[];
undefined4
FUN_0007f4b0(undefined4 param_1,wchar_t *param_2,char param_3,char param_4,size_t param_5)

{
  char cVar1;
  char *in_EAX;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 uVar4;
  
  pwVar2 = (wchar_t *)FUN_001e97c0();
  iVar3 = _wcscmp(param_2,pwVar2);
  if (iVar3 != 0) {
    pwVar2 = (wchar_t *)FUN_001e97c0();
    iVar3 = _wcscmp(param_2,pwVar2);
    if (iVar3 != 0) {
      if ((((param_4 != '\0') && (*(int *)(DAT_0046995c + 0x1c) != 0)) &&
          (cVar1 = FUN_002e5880(), cVar1 == '\0')) &&
         ((iVar3 = FUN_002e5bf0(0), *(int *)(iVar3 + 0x2c) != 0 &&
          (*(int *)(DAT_0046995c + 0x1c) != 0)))) {
        _strncpy(in_EAX,s_z__syslinkcoop__0040dc04,param_5);
        in_EAX[param_5 - 1] = '\0';
        if (param_3 == '\0') {
          FUN_0007f410();
          iVar3 = FUN_002f4839(in_EAX,0);
          if (iVar3 == 0) {
            return 0x52;
          }
        }
        return 0;
      }
      uVar4 = XAPILIB__XCreateSaveGame
                        (&DAT_0040dd48,param_2,(param_3 != '\0') * '\x02' + '\x01',0,in_EAX,param_5)
      ;
      return uVar4;
    }
  }
  return 0x52;
}
