#ifndef DELEGATE_H
#define DELEGATE_H
#include <QtWidgets>

class ReadOnlyDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    ReadOnlyDelegate(QObject *parent = 0): QItemDelegate(parent) { }
    QWidget *createEditor(QWidget*parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const
    {
        return NULL;
    }
};
class ManDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    ManDelegate(QObject *parent = 0): QItemDelegate(parent) { }
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const
    {
        QComboBox *editor = new QComboBox(parent);
        editor->addItem("男");
        editor->addItem("女");
        return editor;
    }
    void setEditorData(QWidget *editor, const QModelIndex &index) const
    {
        QString text = index.model()->data(index, Qt::EditRole).toString();
        QComboBox *comboBox = static_cast<QComboBox*>(editor);
        int tindex = comboBox->findText(text);
        comboBox->setCurrentIndex(tindex);
    }
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const
    {
        QComboBox *comboBox = static_cast<QComboBox*>(editor);
        QString text = comboBox->currentText();
        model->setData(index, text, Qt::EditRole);
    }
    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        editor->setGeometry(option.rect);
    }
};

class IsDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    IsDelegate(QObject *parent = 0): QItemDelegate(parent) { }
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const
    {
        QComboBox *editor = new QComboBox(parent);
        editor->addItem("是");
        editor->addItem("否");
        return editor;
    }
    void setEditorData(QWidget *editor, const QModelIndex &index) const
    {
        QString text = index.model()->data(index, Qt::EditRole).toString();
        QComboBox *comboBox = static_cast<QComboBox*>(editor);
        int tindex = comboBox->findText(text);
        comboBox->setCurrentIndex(tindex);
    }
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const
    {
        QComboBox *comboBox = static_cast<QComboBox*>(editor);
        QString text = comboBox->currentText();
        model->setData(index, text, Qt::EditRole);
    }
    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        editor->setGeometry(option.rect);
    }
};

class IsDelegate1 : public QItemDelegate
{
    Q_OBJECT
public:
    IsDelegate1(QObject *parent = 0): QItemDelegate(parent) { }
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const
    {
        QComboBox *editor = new QComboBox(parent);
        editor->addItem("1");
        editor->addItem("0");
        return editor;
    }
    void setEditorData(QWidget *editor, const QModelIndex &index) const
    {
        QString text = index.model()->data(index, Qt::EditRole).toString();
        QComboBox *comboBox = static_cast<QComboBox*>(editor);
        int tindex = comboBox->findText(text);
        comboBox->setCurrentIndex(tindex);
    }
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const
    {
        QComboBox *comboBox = static_cast<QComboBox*>(editor);
        QString text = comboBox->currentText();
        model->setData(index, text, Qt::EditRole);
    }
    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        editor->setGeometry(option.rect);
    }
};

#endif // DELEGATE_H
