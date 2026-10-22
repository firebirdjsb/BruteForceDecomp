/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F04935F1500CFF7F7ED1E78DFCA4403F2A54FEA6DABDB96DA0D4701FF3D9F1CE
 * Entry: 0x00239b80, Ghidra index: 7892, label: FUN_00239b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443300;
extern uint32_t DAT_00443304;
extern uint32_t DAT_00443308;
extern uint32_t DAT_00443310;
extern uint32_t DAT_00443314;
extern char s_23_23_IAnimation_00406160[];
extern char s_23_23_IEngine_004061ac[];
extern char s_23_23_IMaterialLibrary_004061d8[];
extern char s_23_23_INamedTextureLocator_00406174[];
extern char s_23_23_IVertexBufferManager_00406190[];
undefined1 FUN_00239b80(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  
  cVar1 = FUN_0025a230();
  cVar2 = '\0';
  if (cVar1 != '\0') {
    cVar2 = FUN_0023b240();
  }
  FUN_00260840();
  FUN_0025bc60();
  FUN_0025f5b0();
  FUN_0025cf70();
  FUN_002618b0();
  FUN_0025fbd0();
  FUN_0025ff20();
  FUN_00261bd0();
  FUN_0025b010();
  FUN_00262120();
  uVar3 = 0;
  if (cVar2 != '\0') {
    iVar4 = FUN_00238080(s_23_23_INamedTextureLocator_00406174,&DAT_00443300);
    if ((((iVar4 < 0) ||
         (iVar4 = FUN_00238080(s_23_23_IMaterialLibrary_004061d8,&DAT_00443308), iVar4 < 0)) ||
        (iVar4 = FUN_00238080(s_23_23_IVertexBufferManager_00406190,&DAT_00443304), iVar4 < 0)) ||
       ((iVar4 = FUN_00238080(s_23_23_IEngine_004061ac,&DAT_00443310), iVar4 < 0 ||
        (iVar4 = FUN_00238080(s_23_23_IAnimation_00406160,&DAT_00443314), iVar4 < 0)))) {
      return 0;
    }
    cVar2 = FUN_00239b30();
    uVar3 = 0;
    if (cVar2 != '\0') {
      cVar2 = FUN_00239b30();
      uVar3 = 0;
      if (cVar2 != '\0') {
        cVar2 = FUN_00239b30();
        uVar3 = 0;
        if (cVar2 != '\0') {
          cVar2 = FUN_00239b30();
          uVar3 = 0;
          if (cVar2 != '\0') {
            cVar2 = FUN_00239b30();
            uVar3 = 0;
            if (cVar2 != '\0') {
              cVar2 = FUN_00239b30();
              uVar3 = 0;
              if (cVar2 != '\0') {
                uVar3 = FUN_00239b30();
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}
