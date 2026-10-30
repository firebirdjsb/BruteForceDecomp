/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5FC1828550E279344BBF0F85779E8D9677DB7B614DC28E4ECABD2D0C12646E0
 * Entry: 0x002ea100, Ghidra index: 10578, label: _memmove
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_002ea135_caseD_0[];
extern uint32_t switchD_002ea135_caseD_1[];
extern uint32_t switchD_002ea135_caseD_2[];
extern uint32_t switchD_002ea135_caseD_3[];
extern uint32_t switchD_002ea2bb_caseD_0[];
extern uint32_t switchD_002ea2bb_caseD_1[];
extern uint32_t switchD_002ea2bb_caseD_2[];
extern uint32_t switchD_002ea2bb_caseD_3[];
/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl _memmove(void *__dest,void *__src,size_t __n)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((__src < __dest) && (__dest < (void *)(__n + (int)__src))) {
    puVar3 = (undefined4 *)((__n - 4) + (int)__src);
    puVar4 = (undefined4 *)((__n - 4) + (int)__dest);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = __n >> 2;
      uVar2 = __n & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return __dest;
        case 2:
          goto switchD_002ea2bb_caseD_2;
        case 3:
          goto switchD_002ea2bb_caseD_3;
        }
        goto switchD_002ea2bb_caseD_1;
      }
    }
    else {
      switch(__n) {
      case 0:
        goto switchD_002ea2bb_caseD_0;
      case 1:
        goto switchD_002ea2bb_caseD_1;
      case 2:
        goto switchD_002ea2bb_caseD_2;
      case 3:
        goto switchD_002ea2bb_caseD_3;
      default:
        uVar1 = __n - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return __dest;
            case 2:
              goto switchD_002ea2bb_caseD_2;
            case 3:
              goto switchD_002ea2bb_caseD_3;
            }
            goto switchD_002ea2bb_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return __dest;
            case 2:
              goto switchD_002ea2bb_caseD_2;
            case 3:
              goto switchD_002ea2bb_caseD_3;
            }
            goto switchD_002ea2bb_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return __dest;
            case 2:
              goto switchD_002ea2bb_caseD_2;
            case 3:
              goto switchD_002ea2bb_caseD_3;
            }
            goto switchD_002ea2bb_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_002ea2bb_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return __dest;
    case 2:
switchD_002ea2bb_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return __dest;
    case 3:
switchD_002ea2bb_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return __dest;
    }
switchD_002ea2bb_caseD_0:
    return __dest;
  }
  puVar3 = __dest;
  if (((uint)__dest & 3) == 0) {
    uVar1 = __n >> 2;
    uVar2 = __n & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)__src;
        __src = (undefined4 *)((int)__src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return __dest;
      case 2:
        goto switchD_002ea135_caseD_2;
      case 3:
        goto switchD_002ea135_caseD_3;
      }
      goto switchD_002ea135_caseD_1;
    }
  }
  else {
    switch(__n) {
    case 0:
      goto switchD_002ea135_caseD_0;
    case 1:
      goto switchD_002ea135_caseD_1;
    case 2:
      goto switchD_002ea135_caseD_2;
    case 3:
      goto switchD_002ea135_caseD_3;
    default:
      uVar1 = (__n - 4) + ((uint)__dest & 3);
      switch((uint)__dest & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)__dest = *(undefined1 *)__src;
        *(undefined1 *)((int)__dest + 1) = *(undefined1 *)((int)__src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)__dest + 2) = *(undefined1 *)((int)__src + 2);
        __src = (void *)((int)__src + 3);
        puVar3 = (undefined4 *)((int)__dest + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)__src;
            __src = (undefined4 *)((int)__src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return __dest;
          case 2:
            goto switchD_002ea135_caseD_2;
          case 3:
            goto switchD_002ea135_caseD_3;
          }
          goto switchD_002ea135_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)__dest = *(undefined1 *)__src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)__dest + 1) = *(undefined1 *)((int)__src + 1);
        __src = (void *)((int)__src + 2);
        puVar3 = (undefined4 *)((int)__dest + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)__src;
            __src = (undefined4 *)((int)__src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return __dest;
          case 2:
            goto switchD_002ea135_caseD_2;
          case 3:
            goto switchD_002ea135_caseD_3;
          }
          goto switchD_002ea135_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)__dest = *(undefined1 *)__src;
        __src = (void *)((int)__src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)__dest + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)__src;
            __src = (undefined4 *)((int)__src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return __dest;
          case 2:
            goto switchD_002ea135_caseD_2;
          case 3:
            goto switchD_002ea135_caseD_3;
          }
          goto switchD_002ea135_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)__src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)__src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)__src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)__src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)__src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)__src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)__src + (uVar1 - 1) * 4);
    __src = (void *)((int)__src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_002ea135_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)__src;
    return __dest;
  case 2:
switchD_002ea135_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)__src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)__src + 1);
    return __dest;
  case 3:
switchD_002ea135_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)__src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)__src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)__src + 2);
    return __dest;
  }
switchD_002ea135_caseD_0:
  return __dest;
}
