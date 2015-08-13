#pragma once

#include "BsScriptEditorPrerequisites.h"
#include "BsGUIElementContainer.h"

namespace BansheeEngine
{
	/**
	 * @brief	GUI object that displays a field in which a GameObject can be dragged and dropped.
	 *			The field accepts a GameObject of a specific type and displays an optional label.
	 */
	class BS_SCR_BED_EXPORT GUIGameObjectField : public GUIElementContainer
	{
		struct PrivatelyConstruct {};

	public:
		/**
		 * Returns type name of the GUI element used for finding GUI element styles. 
		 */
		static const String& getGUITypeName();

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelContent	Content to display in the editor field label.
		 * @param	labelWidth		Width of the label in pixels.
		 * @param	options			Options that allow you to control how is the element positioned and sized.
		 *							This will override any similar options set by style.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const GUIContent& labelContent, UINT32 labelWidth, const GUIOptions& options, 
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelContent	Content to display in the editor field label.
		 * @param	options			Options that allow you to control how is the element positioned and sized.
		 *							This will override any similar options set by style.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const GUIContent& labelContent, const GUIOptions& options,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelText		Text to display in the editor field label.
		 * @param	labelWidth		Width of the label in pixels.
		 * @param	options			Options that allow you to control how is the element positioned and sized.
		 *							This will override any similar options set by style.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const HString& labelText, UINT32 labelWidth, const GUIOptions& options,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelText		Text to display in the editor field label.
		 * @param	options			Options that allow you to control how is the element positioned and sized.
		 *							This will override any similar options set by style.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const HString& labelText, const GUIOptions& options,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field without a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	options			Options that allow you to control how is the element positioned and sized.
		 *							This will override any similar options set by style.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const GUIOptions& options, const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelContent	Content to display in the editor field label.
		 * @param	labelWidth		Width of the label in pixels.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const GUIContent& labelContent, UINT32 labelWidth,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelContent	Content to display in the editor field label.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const GUIContent& labelContent,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelText		Text to display in the editor field label.
		 * @param	labelWidth		Width of the label in pixels.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const HString& labelText, UINT32 labelWidth,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field with a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	labelText		Text to display in the editor field label.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const HString& labelText,
			const String& style = StringUtil::BLANK);

		/**
		 * @brief	Creates a new game object GUI editor field without a label.
		 *
		 * @param	typeNamespace	Namespace of the type this field accepts.
		 * @param	type			Type name of the type this field accepts. Must derive from GameObject.
		 * @param	style			Optional style to use for the element. Style will be retrieved
		 *							from GUISkin of the GUIWidget the element is used on. If not specified
		 *							default style is used.
		 */
		static GUIGameObjectField* create(const String& typeNamespace, const String& type, const String& style = StringUtil::BLANK);

		GUIGameObjectField(const PrivatelyConstruct& dummy, const String& typeNamespace, const String& type, const GUIContent& labelContent,
			UINT32 labelWidth, const String& style, const GUIDimensions& dimensions, bool withLabel);

		/**
		 * @brief	Returns the game object currently referenced by the field, if any.
		 */
		HGameObject getValue() const;

		/**
		 * @brief	Sets the game object referenced by the field.
		 */
		void setValue(const HGameObject& value);

		/**
		 * @copydoc	GUIElement::setTint
		 */
		virtual void setTint(const Color& color) override;

		/**
		 * @copydoc	GUIElement::_updateLayoutInternal
		 */
		void _updateLayoutInternal(const GUILayoutData& data) override;

		/**
		 * @copydoc	GUIElement::_getOptimalSize
		 */
		Vector2I _getOptimalSize() const override;

		/**
		 * @brief	Triggered whenever the referenced game object changes.
		 */
		Event<void(const HGameObject&)> onValueChanged;
	private:
		virtual ~GUIGameObjectField();

		/**
		 * @copydoc	GUIElement::styleUpdated
		 */
		void styleUpdated() override;

		/**
		 * @brief	Triggered when a drag and drop operation finishes over this element.
		 */
		void dataDropped(void* data);

		/**
		 * @brief	Triggered when the drop button that displays the game object label is clicked.
		 */
		void onDropButtonClicked();

		/**
		 * @brief	Triggered when the clear button is clicked.
		 */
		void onClearButtonClicked();

	private:
		static const UINT32 DEFAULT_LABEL_WIDTH;

		GUILayout* mLayout;
		GUILabel* mLabel;
		GUIDropButton* mDropButton;
		GUIButton* mClearButton;
		String mType;
		String mNamespace;

		UINT64 mInstanceId;
	};
}