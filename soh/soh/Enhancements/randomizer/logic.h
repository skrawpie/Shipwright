#pragma once

#include "randomizerTypes.h"
#include "context.h"
#include <cstdint>

namespace Rando {

enum class HasProjectileAge {
    Adult,
    Child,
    Both,
    Either,
};

enum class GlitchType {
    EquipSwapDins,
    EquipSwap,
};

enum class GlitchDifficulty {
    NOVICE = 1,
    INTERMEDIATE,
    ADVANCED,
    EXPERT,
    HERO,
};

class Logic {
  public:
    bool noVariable = false;

    // Child item logic
    bool KokiriSword = false;
    bool BulletBag = false;
    bool ZeldasLetter = false;
    bool WeirdEgg = false;
    bool HasBottle = false;
    bool MagicBean = false;
    bool RutosLetter = false;
    bool Boomerang = false;
    bool DinsFire = false;
    bool FaroresWind = false;
    bool NayrusLove = false;
    bool LensOfTruth = false;
    bool ShardOfAgony = false;
    bool SkullMask = false;
    bool MaskOfTruth = false;

    // Adult logic
    bool Hammer = false;
    bool IronBoots = false;
    bool HoverBoots = false;
    bool MirrorShield = false;
    bool GoronTunic = false;
    bool ZoraTunic = false;
    bool Epona = false;
    //bool BigPoe = false; //unused
    bool GerudoToken = false;
    bool FireArrows = false;
    bool IceArrows = false;
    bool LightArrows = false;
    bool MasterSword = false;
    bool BiggoronSword = false;

    // Trade Quest
    bool PocketEgg = false;
    bool Cojiro = false;
    bool OddMushroom = false;
    bool OddPoultice = false;
    bool PoachersSaw = false;
    bool BrokenSword = false;
    bool Prescription = false;
    bool EyeballFrog = false;
    bool Eyedrops = false;
    bool ClaimCheck = false;

    // Trade Quest Events
    bool WakeUpAdultTalon = false;
    bool CojiroAccess = false;
    bool OddMushroomAccess = false;
    bool OddPoulticeAccess = false;
    bool PoachersSawAccess = false;
    bool BrokenSwordAccess = false;
    bool PrescriptionAccess = false;
    bool EyeballFrogAccess = false;
    bool EyedropsAccess = false;
    bool DisableTradeRevert = false;

    // Stones and Meddallions
    bool ForestMedallion = false;
    bool FireMedallion = false;
    bool WaterMedallion = false;
    bool SpiritMedallion = false;
    bool ShadowMedallion = false;
    bool LightMedallion = false;
    bool KokiriEmerald = false;
    bool GoronRuby = false;
    bool ZoraSapphire = false;

    // Dungeon Clears
    bool DekuTreeClear = false;
    bool DodongosCavernClear = false;
    bool JabuJabusBellyClear = false;
    bool ForestTempleClear = false;
    bool FireTempleClear = false;
    bool WaterTempleClear = false;
    bool SpiritTempleClear = false;
    bool ShadowTempleClear = false;

    // Trial Clears
    bool ForestTrialClear = false;
    bool FireTrialClear = false;
    bool WaterTrialClear = false;
    bool SpiritTrialClear = false;
    bool ShadowTrialClear = false;
    bool LightTrialClear = false;

    // Greg
    bool Greg = false;
    bool GregInBridgeLogic = false;
    bool GregInLacsLogic = false;

    // Progressive Items
    uint8_t ProgressiveBulletBag = 0;
    uint8_t ProgressiveBombBag = 0;
    uint8_t ProgressiveMagic = 0;
    uint8_t ProgressiveScale = 0;
    uint8_t ProgressiveHookshot = 0;
    uint8_t ProgressiveBow = 0;
    uint8_t ProgressiveWallet = 0;
    uint8_t ProgressiveStrength = 0;
    uint8_t ProgressiveOcarina = 0;
    uint8_t ProgressiveGiantKnife = 0;

    // Logical keysanity
    bool IsKeysanity = false;

    // Keys
    uint8_t ForestTempleKeys = 0;
    uint8_t FireTempleKeys = 0;
    uint8_t WaterTempleKeys = 0;
    uint8_t SpiritTempleKeys = 0;
    uint8_t ShadowTempleKeys = 0;
    uint8_t GanonsCastleKeys = 0;
    uint8_t GerudoFortressKeys = 0;
    uint8_t GerudoTrainingGroundsKeys = 0;
    uint8_t BottomOfTheWellKeys = 0;
    uint8_t TreasureGameKeys = 0;

    // Triforce Pieces
    uint8_t TriforcePieces = 0;

    // Ganon's Boss Key Shards
    uint8_t GKShards = 0;

    // Boss Keys
    bool BossKeyForestTemple = false;
    bool BossKeyFireTemple = false;
    bool BossKeyWaterTemple = false;
    bool BossKeySpiritTemple = false;
    bool BossKeyShadowTemple = false;
    bool BossKeyGanonsCastle = false;

    // Gold Skulltula Count
    uint8_t GoldSkulltulaTokens = 0;

    // Bottle Count
    uint8_t Bottles = 0;
    uint8_t NumBottles = 0;
    bool CanEmptyBigPoes = true;

    // Drops and Bottle Contents Access
    bool NutPot = false;
    bool NutCrate = false;
    bool DekuBabaNuts = false;
    bool StickPot = false;
    bool DekuBabaSticks = false;
    bool BugShrub = false;
    bool WanderingBugs = false;
    bool BugRock = false;
    bool BlueFireAccess = false;
    bool FishGroup = false;
    bool LoneFish = false;
    bool GossipStoneFairy = false;
    bool BeanPlantFairy = false;
    bool ButterflyFairy = false;
    bool FairyPot = false;
    bool FreeFairies = false;
    bool FairyPond = false;
    bool AmmoCanDrop = false;
    bool BombchuRefill = false;
    bool BombchusEnabled  = false;
    bool BuyBombchus = false;

    bool BuySeed = false;
    bool BuyArrow = false;
    bool BuyBomb = false;
    bool BuyMagicPotion = false;
    bool BuyFish = false;
    bool BuyBugs = false;
    bool BuyFairy = false;

    uint8_t PieceOfHeart = 0;
    uint8_t HeartContainer = 0;
    bool DoubleDefense = false;

    /* --- HELPERS, EVENTS, AND LOCATION ACCESS --- */
    /* These are used to simplify reading the logic, but need to be updated
    /  every time a base value is updated.                       */

    bool Ocarina = false;
    bool OcarinaOfTime = false;
    bool BombBag = false;
    bool MagicMeter = false;
    bool Hookshot = false;
    bool Longshot = false;
    bool Quiver = false;
    bool GoronBracelet = false;
    bool SilverGauntlets = false;
    bool GoldenGauntlets = false;
    bool Swim = false;
    bool SilverScale = false;
    bool GoldScale = false;
    bool ChildsWallet = false;
    bool AdultsWallet = false;

    bool ChildScarecrow = false;
    bool AdultScarecrow = false;
    bool ScarecrowSong = false;
    bool Scarecrow = false;
    bool DistantScarecrow = false;

    bool Slingshot = false;
    bool Bombs = false;
    bool Bow = false;
    bool DekuShield = false;
    bool HylianShield = false;
    bool BlueFire = false;
    bool BottleWithBigPoe = false;

    bool OcarinaAButton      = false;
    bool OcarinaCLeftButton  = false;
    bool OcarinaCRightButton = false;
    bool OcarinaCUpButton    = false;
    bool OcarinaCDownButton  = false;

    bool CarpetMerchant = false;
    bool CouldPlayBowling = false;
    bool HasExplosives = false;
    bool HasBoots = false;
    bool IsChild = false;
    bool IsAdult = false;
    bool IsGlitched = false;
    bool CanBlastOrSmash = false;
    bool CanChildAttack = false;
    bool CanChildDamage = false;
    bool CanAdultAttack = false;
    bool CanAdultDamage = false;
    bool CanCutShrubs = false;
    bool CanDive = false;
    bool CanLeaveForest = false;
    bool CanPlantBugs = false;
    bool CanRideEpona = false;
    bool CanStunDeku = false;
    bool CanSummonGossipFairy = false;
    bool CanSummonGossipFairyWithoutSuns = false;
    bool NeedNayrusLove = false;
    bool CanSurviveDamage = false;
    bool CanTakeDamage = false;
    bool CanTakeDamageTwice = false;
    // bool CanPlantBean        = false;
    bool CanOpenBombGrotto = false;
    bool CanOpenStormGrotto = false;
    bool BigPoeKill = false;
    bool HookshotOrBoomerang = false;
    bool CanGetNightTimeGS = false;
    bool CanBreakLowerBeehives = false;
    bool CanBreakUpperBeehives = false;
    bool FishingPole = false;
    bool CanGetChildFish = false;
    bool CanGetAdultFish = false;
    bool CanFish = false;

    uint8_t OcarinaButtons = 0;
    uint8_t BaseHearts = 0;
    uint8_t Hearts = 0;
    uint8_t Multiplier = 0;
    uint8_t EffectiveHealth = 0;
    uint8_t FireTimer = 0;
    uint8_t WaterTimer = 0;

    bool GuaranteeTradePath = false;
    bool GuaranteeHint = false;
    bool HasFireSource = false;
    bool HasFireSourceWithTorch = false;

    bool CanFinishGerudoFortress = false;

    bool HasShield = false;
    bool CanShield = false;
    bool ChildShield = false;
    bool AdultReflectShield = false;
    bool AdultShield = false;
    bool CanShieldFlick = false;
    bool CanJumpslash = false;
    bool CanUseProjectile = false;
    bool CanUseMagicArrow = false;

    // Bridge and LACS Requirements
    uint8_t StoneCount = 0;
    uint8_t MedallionCount = 0;
    uint8_t DungeonCount = 0;
    bool HasAllStones = false;
    bool HasAllMedallions = false;
    bool CanBuildRainbowBridge = false;
    bool BuiltRainbowBridge = false;
    bool CanTriggerLACS = false;

    // Other
    bool AtDay = false;
    bool AtNight = false;
    uint8_t Age = 0;
    bool CanCompleteTriforce = false;
    bool CanCompleteGanonBossKey = false;

    bool CanSummonGohma = false;
    bool CanSummonKingDodongo = false;
    bool CanSummonBarinade = false;
    bool CanSummonPhantomGanon = false;
    bool CanSummonVolvagia = false;
    bool CanSummonMorpha = false;
    bool CanSummonBongoBongo = false;
    bool CanSummonTwinrova = false;
    bool CanSummonGanon = false;

    // Events
    bool ShowedMidoSwordAndShield = false;
    bool CarpenterRescue = false;
    bool GF_GateOpen = false;
    bool GtG_GateOpen = false;
    bool DampesWindmillAccess = false;
    bool DrainWell = false;
    bool GoronCityChildFire = false;
    bool GCWoodsWarpOpen = false;
    bool GCDaruniasDoorOpenChild = false;
    bool StopGCRollingGoronAsAdult = false;
    bool WaterTempleLow = false;
    bool WaterTempleMiddle = false;
    bool WaterTempleHigh = false;
    bool KakarikoVillageGateOpen = false;
    bool KingZoraThawed = false;
    bool ForestTempleJoelle = false;
    bool ForestTempleBeth = false;
    bool ForestTempleJoAndBeth = false;
    bool ForestTempleAmy = false;
    bool ForestTempleMeg = false;
    bool ForestTempleAmyAndMeg = false;
    bool FireLoopSwitch = false;
    bool LinksCow = false;
    bool AtDampeTime = false;
    bool DeliverLetter = false;
    bool TimeTravel = false;

    /* --- END OF HELPERS AND LOCATION ACCESS --- */

    // Placement Tracking
    uint8_t AddedProgressiveBulletBags = 0;
    uint8_t AddedProgressiveBombBags = 0;
    uint8_t AddedProgressiveMagics = 0;
    uint8_t AddedProgressiveScales = 0;
    uint8_t AddedProgressiveHookshots = 0;
    uint8_t AddedProgressiveBows = 0;
    uint8_t AddedProgressiveWallets = 0;
    uint8_t AddedProgressiveStrengths = 0;
    uint8_t AddedProgressiveOcarinas = 0;
    uint8_t TokensInPool = 0;

    // Event checking past
    bool DrainWellPast = false;
    bool DampesWindmillAccessPast = false;
    bool DekuTreeClearPast = false;
    bool GoronRubyPast = false;
    bool ZoraSapphirePast = false;
    bool ForestTrialClearPast = false;
    bool FireTrialClearPast = false;
    bool WaterTrialClearPast = false;
    bool SpiritTrialClearPast = false;
    bool ShadowTrialClearPast = false;
    bool LightTrialClearPast = false;
    bool BuyDekuShieldPast = false;
    bool TimeTravelPast = false;

    SaveContext* mSaveContext = nullptr;
    Logic();
    void UpdateHelpers();
    bool CanUse(RandomizerGet itemName);
    bool HasProjectile(HasProjectileAge age);
    bool HasItem(RandomizerGet itemName);
    bool HasBossSoul(RandomizerGet itemName);
    bool SmallKeys(RandomizerRegion dungeon, uint8_t requiredAmount);
    bool SmallKeys(RandomizerRegion dungeon, uint8_t requiredAmountGlitchless, uint8_t requiredAmountGlitched);
    bool CanDoGlitch(GlitchType glitch);
    bool CanEquipSwap(RandomizerGet itemName);
    bool CanKillEnemy(std::string enemy);
    bool CanPassEnemy(std::string enemy);
    bool EventsUpdated();
    uint8_t BottleCount();
    void Reset();
    void SetContext(std::shared_ptr<Context> _ctx);
    bool GetInLogic(LogicVal logicVal);
    void SetInLogic(LogicVal logicVal, bool remove);
    void ApplyItemEffect(Item& item, bool state);
    uint8_t InventorySlot(uint32_t item);
    void SetUpgrade(uint32_t upgrade, uint8_t level);
    uint32_t CurrentUpgrade(uint32_t upgrade);
    uint32_t CurrentInventory(uint32_t item);
    bool CheckInventory(uint32_t item, bool exact);
    void SetInventory(uint32_t itemSlot, uint32_t item);
    bool CheckEquipment(uint32_t item);
    bool CheckQuestItem(uint32_t item);
    void SetQuestItem(uint32_t item, bool state);
    bool HasAdultTrade(uint32_t item);
    void SetAdultTrade(uint32_t item, bool state);
    uint8_t GetSmallKeyCount(uint32_t dungeonIndex);
    void SetSmallKeyCount(uint32_t dungeonIndex, uint8_t count);
    bool CheckDungeonItem(uint32_t item, uint32_t dungeonIndex);
    void SetDungeonItem(uint32_t item, uint32_t dungeonIndex, bool state);
    bool CheckRandoInf(uint32_t flag);
    void SetRandoInf(uint32_t flag, bool state);
    bool CheckEventChkInf(int32_t flag);
    uint8_t GetGSCount();
    void SetEventChkInf(int32_t flag, bool state);
    uint8_t GetAmmo(uint32_t item);
    void SetAmmo(uint32_t item, uint8_t count);
    SaveContext* GetSaveContext();
    void SetSaveContext(SaveContext* context);
    void InitSaveContext();
    void NewSaveContext();
    static std::map<uint32_t, uint32_t> RandoGetToQuestItem;
    static std::map<uint32_t, uint32_t> RandoGetToDungeonScene;
    static std::map<RandomizerGet, uint32_t> RandoGetToEquipFlag;
    static std::map<RandomizerGet, uint32_t> RandoGetToRandInf;

  private:
    static bool IsMagicItem(RandomizerGet item);
    static bool IsMagicArrow(RandomizerGet item);
    std::shared_ptr<Context> ctx;
    bool inLogic[LOGIC_MAX];
}; // class Logic
} // namespace Rando